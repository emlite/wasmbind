#include <webbind/SvcOutputMetadata.hpp>

using emlite::Val;
namespace webbind {

SvcOutputMetadata::SvcOutputMetadata(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SvcOutputMetadata SvcOutputMetadata::take_ownership(Handle h) noexcept {
        return SvcOutputMetadata(h);
    }
SvcOutputMetadata::SvcOutputMetadata(const emlite::Val &val) noexcept: emlite::Val(val) {}
SvcOutputMetadata::SvcOutputMetadata() noexcept: emlite::Val(emlite::Val::object()) {}
SvcOutputMetadata SvcOutputMetadata::clone() const noexcept { return *this; }

unsigned long SvcOutputMetadata::temporalLayerId() const {
    return emlite::Val::get("temporalLayerId").as<unsigned long>();
}

void SvcOutputMetadata::temporalLayerId(unsigned long value) {
    emlite::Val::set("temporalLayerId", value);
}


} // namespace webbind