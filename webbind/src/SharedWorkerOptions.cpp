#include "webbind/SharedWorkerOptions.hpp"

using emlite::Val;
namespace webbind {

SharedWorkerOptions::SharedWorkerOptions(Handle h) noexcept : WorkerOptions(emlite::Val::take_ownership(h)) {}
SharedWorkerOptions SharedWorkerOptions::take_ownership(Handle h) noexcept {
        return SharedWorkerOptions(h);
    }
SharedWorkerOptions::SharedWorkerOptions(const emlite::Val &val) noexcept: WorkerOptions(val) {}
SharedWorkerOptions::SharedWorkerOptions() noexcept: WorkerOptions(emlite::Val::object()) {}
SharedWorkerOptions SharedWorkerOptions::clone() const noexcept { return *this; }

SameSiteCookiesType SharedWorkerOptions::sameSiteCookies() const {
    return emlite::Val::get("sameSiteCookies").as<SameSiteCookiesType>();
}

void SharedWorkerOptions::sameSiteCookies(const SameSiteCookiesType& value) {
    emlite::Val::set("sameSiteCookies", value);
}


} // namespace webbind