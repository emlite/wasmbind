#include "webbind/AuctionAdInterestGroupKey.hpp"

using emlite::Val;
namespace webbind {

AuctionAdInterestGroupKey::AuctionAdInterestGroupKey(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuctionAdInterestGroupKey AuctionAdInterestGroupKey::take_ownership(Handle h) noexcept {
        return AuctionAdInterestGroupKey(h);
    }
AuctionAdInterestGroupKey::AuctionAdInterestGroupKey(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuctionAdInterestGroupKey::AuctionAdInterestGroupKey() noexcept: emlite::Val(emlite::Val::object()) {}
AuctionAdInterestGroupKey AuctionAdInterestGroupKey::clone() const noexcept { return *this; }

jsbind::String AuctionAdInterestGroupKey::owner() const {
    return emlite::Val::get("owner").as<jsbind::String>();
}

void AuctionAdInterestGroupKey::owner(const jsbind::String& value) {
    emlite::Val::set("owner", value);
}

jsbind::String AuctionAdInterestGroupKey::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void AuctionAdInterestGroupKey::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}


} // namespace webbind