#include <webbind/IdleRequestOptions.hpp>

using emlite::Val;
namespace webbind {

IdleRequestOptions::IdleRequestOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdleRequestOptions IdleRequestOptions::take_ownership(Handle h) noexcept {
        return IdleRequestOptions(h);
    }
IdleRequestOptions::IdleRequestOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
IdleRequestOptions::IdleRequestOptions() noexcept: emlite::Val(emlite::Val::object()) {}
IdleRequestOptions IdleRequestOptions::clone() const noexcept { return *this; }

unsigned long IdleRequestOptions::timeout() const {
    return emlite::Val::get("timeout").as<unsigned long>();
}

void IdleRequestOptions::timeout(unsigned long value) {
    emlite::Val::set("timeout", value);
}


} // namespace webbind