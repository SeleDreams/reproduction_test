use std::env;
fn main() {
    let path = env::var("CARGO_MANIFEST_DIR").unwrap();
    let bindings = bindgen::Builder::default()
    .clang_arg(format!("-I{path}/test"))
    .clang_arg(format!("-I{path}/othertest"))
    .header("wrapper.h")
    .wrap_static_fns(true)
    .wrap_static_fns_path("src/bindings.c")
    .use_core()
    .trust_clang_mangling(false)
    .prepend_enum_name(false)
    // Tell cargo to invalidate the built crate whenever any of the
    // included header files changed.
    .clang_macro_fallback()
    .wrap_unsafe_ops(true)
    // Finish the builder and generate the bindings.
    .generate()
    // Unwrap the Result and panic on failure.
    .expect("Unable to generate bindings");
    bindings
    .write_to_file("src/bindings.rs")
    .expect("Couldn't write bindings!");
}