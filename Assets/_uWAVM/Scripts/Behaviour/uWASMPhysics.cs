using System.Runtime.InteropServices;
using UnityEngine;


namespace uWASM
{
    public static class uWASMPhysics
    {
        public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo)
        {
            hitInfo = new RaycastHit();
            var result = RaycastExtern(origin, direction);
            hitInfo.point = result.point;
            hitInfo.normal = result.normal;
            return result.hit;
        }

        [DllImport("__Internal")] 
        public static extern uWASMRaycastHit RaycastExtern(Vector3 origin, Vector3 direction);
    }

    public struct uWASMRaycastHit
    {
        public bool hit;
        public Vector3 point;
        public Vector3 normal;
    }
}