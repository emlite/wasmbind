#include <webbind/AuctionAdInterestGroupSize.hpp>

using emlite::Val;
namespace webbind {

AuctionAdInterestGroupSize::AuctionAdInterestGroupSize(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuctionAdInterestGroupSize AuctionAdInterestGroupSize::take_ownership(Handle h) noexcept {
        return AuctionAdInterestGroupSize(h);
    }
AuctionAdInterestGroupSize::AuctionAdInterestGroupSize(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuctionAdInterestGroupSize::AuctionAdInterestGroupSize() noexcept: emlite::Val(emlite::Val::object()) {}
AuctionAdInterestGroupSize AuctionAdInterestGroupSize::clone() const noexcept { return *this; }

jsbind::String AuctionAdInterestGroupSize::width() const {
    return emlite::Val::get("width").as<jsbind::String>();
}

void AuctionAdInterestGroupSize::width(const jsbind::String& value) {
    emlite::Val::set("width", value);
}

jsbind::String AuctionAdInterestGroupSize::height() const {
    return emlite::Val::get("height").as<jsbind::String>();
}

void AuctionAdInterestGroupSize::height(const jsbind::String& value) {
    emlite::Val::set("height", value);
}


} // namespace webbind