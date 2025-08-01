#include <webbind/FileList.hpp>
#include <webbind/File.hpp>


FileList FileList::take_ownership(Handle h) noexcept {
        return FileList(h);
    }
FileList FileList::clone() const noexcept { return *this; }
FileList::FileList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileList::FileList(const emlite::Val &val) noexcept: emlite::Val(val) {}


File FileList::item(unsigned long index) {
    return emlite::Val::call("item", index).as<File>();
}

unsigned long FileList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

