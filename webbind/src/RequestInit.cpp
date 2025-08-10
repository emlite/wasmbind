#include <webbind/RequestInit.hpp>

using emlite::Val;
namespace webbind {

RequestInit::RequestInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RequestInit RequestInit::take_ownership(Handle h) noexcept {
        return RequestInit(h);
    }
RequestInit::RequestInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
RequestInit::RequestInit() noexcept: emlite::Val(emlite::Val::object()) {}
RequestInit RequestInit::clone() const noexcept { return *this; }

bool RequestInit::adAuctionHeaders() const {
    return emlite::Val::get("adAuctionHeaders").as<bool>();
}

void RequestInit::adAuctionHeaders(bool value) {
    emlite::Val::set("adAuctionHeaders", value);
}


} // namespace webbind