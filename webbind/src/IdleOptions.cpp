#include <webbind/IdleOptions.hpp>
#include <webbind/AbortSignal.hpp>

using emlite::Val;
namespace webbind {

IdleOptions::IdleOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdleOptions IdleOptions::take_ownership(Handle h) noexcept {
        return IdleOptions(h);
    }
IdleOptions::IdleOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
IdleOptions::IdleOptions() noexcept: emlite::Val(emlite::Val::object()) {}
IdleOptions IdleOptions::clone() const noexcept { return *this; }

long long IdleOptions::threshold() const {
    return emlite::Val::get("threshold").as<long long>();
}

void IdleOptions::threshold(long long value) {
    emlite::Val::set("threshold", value);
}

AbortSignal IdleOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void IdleOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}


} // namespace webbind