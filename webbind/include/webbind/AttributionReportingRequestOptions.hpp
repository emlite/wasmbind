#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AttributionReportingRequestOptions
class AttributionReportingRequestOptions : public emlite::Val {
  explicit AttributionReportingRequestOptions(Handle h) noexcept;
public:
    static AttributionReportingRequestOptions take_ownership(Handle h) noexcept;
    explicit AttributionReportingRequestOptions(const emlite::Val &val) noexcept;
    AttributionReportingRequestOptions() noexcept;
    [[nodiscard]] AttributionReportingRequestOptions clone() const noexcept;
    /// Getter of the `eventSourceEligible` attribute.
    [[nodiscard]] bool eventSourceEligible() const;
    /// Setter of the `eventSourceEligible` attribute.
    void eventSourceEligible(bool value);
    /// Getter of the `triggerEligible` attribute.
    [[nodiscard]] bool triggerEligible() const;
    /// Setter of the `triggerEligible` attribute.
    void triggerEligible(bool value);
};

} // namespace webbind