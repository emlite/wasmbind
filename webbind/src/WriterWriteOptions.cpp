#include "webbind/WriterWriteOptions.hpp"
#include "webbind/AbortSignal.hpp"

using emlite::Val;
namespace webbind {

WriterWriteOptions::WriterWriteOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WriterWriteOptions WriterWriteOptions::take_ownership(Handle h) noexcept {
        return WriterWriteOptions(h);
    }
WriterWriteOptions::WriterWriteOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
WriterWriteOptions::WriterWriteOptions() noexcept: emlite::Val(emlite::Val::object()) {}
WriterWriteOptions WriterWriteOptions::clone() const noexcept { return *this; }

jsbind::String WriterWriteOptions::context() const {
    return emlite::Val::get("context").as<jsbind::String>();
}

void WriterWriteOptions::context(const jsbind::String& value) {
    emlite::Val::set("context", value);
}

AbortSignal WriterWriteOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void WriterWriteOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}


} // namespace webbind