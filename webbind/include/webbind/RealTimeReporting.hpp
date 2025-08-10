#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class RealTimeContribution;

/// Interface RealTimeReporting
/// [`RealTimeReporting`](https://developer.mozilla.org/en-US/docs/Web/API/RealTimeReporting)
class RealTimeReporting : public emlite::Val {
    explicit RealTimeReporting(Handle h) noexcept;
public:
    explicit RealTimeReporting(const emlite::Val &val) noexcept;
    static RealTimeReporting take_ownership(Handle h) noexcept;
    [[nodiscard]] RealTimeReporting clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The contributeToHistogram method.
    /// [`RealTimeReporting.contributeToHistogram`](https://developer.mozilla.org/en-US/docs/Web/API/RealTimeReporting/contributeToHistogram)
    jsbind::Undefined contributeToHistogram(const RealTimeContribution& contribution);
};

} // namespace webbind