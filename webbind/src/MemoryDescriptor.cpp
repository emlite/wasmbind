#include <webbind/MemoryDescriptor.hpp>

using emlite::Val;
namespace webbind {

MemoryDescriptor::MemoryDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MemoryDescriptor MemoryDescriptor::take_ownership(Handle h) noexcept {
        return MemoryDescriptor(h);
    }
MemoryDescriptor::MemoryDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
MemoryDescriptor::MemoryDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
MemoryDescriptor MemoryDescriptor::clone() const noexcept { return *this; }

unsigned long MemoryDescriptor::initial() const {
    return emlite::Val::get("initial").as<unsigned long>();
}

void MemoryDescriptor::initial(unsigned long value) {
    emlite::Val::set("initial", value);
}

unsigned long MemoryDescriptor::maximum() const {
    return emlite::Val::get("maximum").as<unsigned long>();
}

void MemoryDescriptor::maximum(unsigned long value) {
    emlite::Val::set("maximum", value);
}


} // namespace webbind