#include "webbind/ProtectedAudiencePrivateAggregationConfig.hpp"

using emlite::Val;
namespace webbind {

ProtectedAudiencePrivateAggregationConfig::ProtectedAudiencePrivateAggregationConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ProtectedAudiencePrivateAggregationConfig ProtectedAudiencePrivateAggregationConfig::take_ownership(Handle h) noexcept {
        return ProtectedAudiencePrivateAggregationConfig(h);
    }
ProtectedAudiencePrivateAggregationConfig::ProtectedAudiencePrivateAggregationConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
ProtectedAudiencePrivateAggregationConfig::ProtectedAudiencePrivateAggregationConfig() noexcept: emlite::Val(emlite::Val::object()) {}
ProtectedAudiencePrivateAggregationConfig ProtectedAudiencePrivateAggregationConfig::clone() const noexcept { return *this; }

jsbind::String ProtectedAudiencePrivateAggregationConfig::aggregationCoordinatorOrigin() const {
    return emlite::Val::get("aggregationCoordinatorOrigin").as<jsbind::String>();
}

void ProtectedAudiencePrivateAggregationConfig::aggregationCoordinatorOrigin(const jsbind::String& value) {
    emlite::Val::set("aggregationCoordinatorOrigin", value);
}


} // namespace webbind