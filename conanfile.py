from conan import ConanFile
from conan.tools.cmake import CMake, cmake_layout
from conan.tools.files import copy, collect_libs
from conan.tools.scm import Git
from conan.errors import ConanInvalidConfiguration
import os

class WasmbindConan(ConanFile):
    name = "wasmbind"
    version = "0.1.1"
    license = "MIT"
    url = "https://github.com/emlite/wasmbind"
    homepage = "https://github.com/emlite/wasmbind"
    description = "Wasmbind is a C++ project that offers bindings to Web APIs for use with wasm."
    topics = ("wasm", "emscripten", "webapi", "bindings", "c++")
    package_type = "library"

    settings = "os", "compiler", "build_type", "arch"
    options = {
        "shared": [True, False],
        "fPIC": [True, False],
        "webbind": [True, False],
    }
    default_options = {
        "shared": False,
        "fPIC": True,
        "webbind": False,
    }

    def validate(self):
        if str(self.settings.get_safe("os")) != "Emscripten":
            raise ConanInvalidConfiguration("wasmbind is intended for os=Emscripten")

    def layout(self):
        cmake_layout(self, src_folder="src")

    def configure(self):
        if self.settings.get_safe("os") == "Windows":
            del self.options.fPIC

    def requirements(self):
        self.requires("emlite/0.1.1")

    def source(self):
        git = Git(self)
        git.clone(
            url="https://github.com/emlite/wasmbind.git",
            target=".",
            args=["--depth=1", f"--branch=v{self.version}"],
        )

    def build(self):
        cmake = CMake(self)
        cmake.configure(variables={
            "WASMBIND_BUILD_WEBBIND": "ON" if self.options.webbind else "OFF",
            "WASMBIND_BUILD_EXAMPLES": "OFF",
        })
        cmake.build()

    def package(self):
        cmake = CMake(self)
        cmake.install()
        copy(self, "LICENSE", src=self.source_folder,
             dst=os.path.join(self.package_folder, "licenses"))

    def package_info(self):
        self.cpp_info.set_property("cmake_file_name", "wasmbind")
        self.cpp_info.set_property("cmake_target_name", "wasmbind::wasmbind")
        self.cpp_info.libs = collect_libs(self)