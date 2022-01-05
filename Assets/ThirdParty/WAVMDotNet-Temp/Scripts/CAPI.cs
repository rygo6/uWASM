using System;
using System.Runtime.InteropServices;
using Module = System.IntPtr;

namespace WAVM
{
    enum ExternKind : byte
    {
        invalid,

        // Standard object kinds that may be imported/exported from WebAssembly modules.
        function,
        table,
        memory,
        global,
        exceptionType,
    };
    
    public enum ObjectKind : byte
    {
        invalid = ExternKind.invalid,

        // Standard object kinds that may be imported/exported from WebAssembly modules.
        function = ExternKind.function,
        table = ExternKind.table,
        memory = ExternKind.memory,
        global = ExternKind.global,
        exceptionType = ExternKind.exceptionType,

        // Runtime-specific object kinds that are only used by transient runtime objects.
        instance,
        context,
        compartment,
        foreign,
    };
    
    [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Ansi)]
    public struct wasm_extern_t
    {
        ObjectKind kind;
    }
    
    public static class CAPI
    {
        const string libPath = "libWAVM";

        [DllImport(libPath)]
        public static extern IntPtr wasm_engine_new();  
        
        [DllImport(libPath, CharSet = CharSet.Ansi)]
        public static extern IntPtr wasm_compartment_new(IntPtr engine, [MarshalAs(UnmanagedType.LPStr)] string debug_name);        
        
        [DllImport(libPath, CharSet = CharSet.Ansi)]
        public static extern IntPtr wasm_store_new(IntPtr compartment, [MarshalAs(UnmanagedType.LPStr)] string debug_name);    
        
        [DllImport(libPath, CharSet = CharSet.Ansi)]
        public static extern IntPtr wasm_module_new(IntPtr engine, byte[] binary, int num_binary_bytes);
        
        [DllImport(libPath, CharSet = CharSet.Ansi)]
        public static extern IntPtr wasm_module_new_text(IntPtr engine, [MarshalAs(UnmanagedType.LPStr)] string text, int num_text_chars);
        
        [DllImport(libPath, CharSet = CharSet.Ansi)]
        public static extern IntPtr wasm_instance_new(IntPtr store, IntPtr module, wasm_extern_t[] imports, IntPtr trap, [MarshalAs(UnmanagedType.LPStr)] string debug_name);
        
        [DllImport(libPath, CharSet = CharSet.Ansi)]
        public static extern Int64 wasm_instance_num_exports(IntPtr instance);
        
        [DllImport(libPath, CharSet = CharSet.Ansi)]
        public static extern IntPtr wasm_store_delete(IntPtr store);       
        
        [DllImport(libPath, CharSet = CharSet.Ansi)]
        public static extern IntPtr wasm_compartment_delete(IntPtr compartment);       
        
        [DllImport(libPath, CharSet = CharSet.Ansi)]
        public static extern IntPtr wasm_engine_delete(IntPtr engine);       
        
        [DllImport(libPath, CharSet = CharSet.Ansi)]
        public static extern IntPtr wasm_instance_delete(IntPtr instance);        
        
        [DllImport(libPath, CharSet = CharSet.Ansi)]
        public static extern IntPtr wasm_module_delete(IntPtr module);
    }
}