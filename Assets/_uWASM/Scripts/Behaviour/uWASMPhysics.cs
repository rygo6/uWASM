using System.Runtime.InteropServices;
using UnityEngine;


namespace uWASM
{
    public static class uWASMPhysics
    {
        // Is there some way I can actually marshall the out type to WASM?
        public static bool Raycast(uWASMVector3 origin, uWASMVector3 direction, out uWASMRaycastHit hitInfo)
        {
            hitInfo = new uWASMRaycastHit();
            var result = RaycastExtern(origin, direction);
            hitInfo.point = result.point;
            hitInfo.normal = result.normal;
            return result.hit;
        }

        [DllImport("__Internal")] 
        public static extern uWASMRaycastHit RaycastExtern(uWASMVector3 origin, uWASMVector3 direction);
    }

    public struct uWASMRaycastHit
    {
        public bool hit;
        public uWASMVector3 point;
        public uWASMVector3 normal;
    }
}