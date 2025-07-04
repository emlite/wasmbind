#include <webbind/MediaSourceHandle.hpp>


MediaSourceHandle MediaSourceHandle::take_ownership(Handle h) noexcept {
        return MediaSourceHandle(h);
    }
MediaSourceHandle MediaSourceHandle::clone() const noexcept { return *this; }
MediaSourceHandle::MediaSourceHandle(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaSourceHandle::MediaSourceHandle(const emlite::Val &val) noexcept: emlite::Val(val) {}


