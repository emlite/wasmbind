#include "webbind/NDEFScanOptions.hpp"
#include "webbind/AbortSignal.hpp"

using emlite::Val;
namespace webbind {

NDEFScanOptions::NDEFScanOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NDEFScanOptions NDEFScanOptions::take_ownership(Handle h) noexcept {
        return NDEFScanOptions(h);
    }
NDEFScanOptions::NDEFScanOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
NDEFScanOptions::NDEFScanOptions() noexcept: emlite::Val(emlite::Val::object()) {}
NDEFScanOptions NDEFScanOptions::clone() const noexcept { return *this; }

AbortSignal NDEFScanOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void NDEFScanOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}


} // namespace webbind