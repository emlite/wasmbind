#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AttributionReportingRequestOptions
/// [`AttributionReportingRequestOptions`](https://developer.mozilla.org/en-US/docs/Web/API/AttributionReportingRequestOptions)
class AttributionReportingRequestOptions : public emlite::Val {
  explicit AttributionReportingRequestOptions(Handle h) noexcept;
public:
    static AttributionReportingRequestOptions take_ownership(Handle h) noexcept;
    explicit AttributionReportingRequestOptions(const emlite::Val &val) noexcept;
    AttributionReportingRequestOptions() noexcept;
    [[nodiscard]] AttributionReportingRequestOptions clone() const noexcept;
    [[nodiscard]] bool eventSourceEligible() const;
    void eventSourceEligible(bool value);
    [[nodiscard]] bool triggerEligible() const;
    void triggerEligible(bool value);
};

} // namespace webbind