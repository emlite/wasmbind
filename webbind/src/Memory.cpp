#include "webbind/Memory.hpp"
#include "webbind/MemoryDescriptor.hpp"

namespace webbind {

Memory Memory::take_ownership(Handle h) noexcept {
        return Memory(h);
    }
Memory Memory::clone() const noexcept { return *this; }
emlite::Val Memory::instance() noexcept { return emlite::Val::global("Memory"); }
Memory::Memory(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Memory::Memory(const emlite::Val &val) noexcept: emlite::Val(val) {}

Memory::Memory(const MemoryDescriptor& descriptor) : emlite::Val(emlite::Val::global("Memory").new_(descriptor)) {}

unsigned long Memory::grow(unsigned long delta) {
    return emlite::Val::call("grow", delta).as<unsigned long>();
}

jsbind::ArrayBuffer Memory::toFixedLengthBuffer() {
    return emlite::Val::call("toFixedLengthBuffer").as<jsbind::ArrayBuffer>();
}

jsbind::ArrayBuffer Memory::toResizableBuffer() {
    return emlite::Val::call("toResizableBuffer").as<jsbind::ArrayBuffer>();
}

jsbind::ArrayBuffer Memory::buffer() const {
    return emlite::Val::get("buffer").as<jsbind::ArrayBuffer>();
}


} // namespace webbind