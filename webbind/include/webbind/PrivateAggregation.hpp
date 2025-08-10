#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class PAHistogramContribution;
class PADebugModeOptions;

/// Interface PrivateAggregation
/// [`PrivateAggregation`](https://developer.mozilla.org/en-US/docs/Web/API/PrivateAggregation)
class PrivateAggregation : public emlite::Val {
    explicit PrivateAggregation(Handle h) noexcept;
public:
    explicit PrivateAggregation(const emlite::Val &val) noexcept;
    static PrivateAggregation take_ownership(Handle h) noexcept;
    [[nodiscard]] PrivateAggregation clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The contributeToHistogram method.
    /// [`PrivateAggregation.contributeToHistogram`](https://developer.mozilla.org/en-US/docs/Web/API/PrivateAggregation/contributeToHistogram)
    jsbind::Undefined contributeToHistogram(const PAHistogramContribution& contribution);
    /// The contributeToHistogramOnEvent method.
    /// [`PrivateAggregation.contributeToHistogramOnEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PrivateAggregation/contributeToHistogramOnEvent)
    jsbind::Undefined contributeToHistogramOnEvent(const jsbind::String& event, const jsbind::Record<jsbind::String, jsbind::Any>& contribution);
    /// The enableDebugMode method.
    /// [`PrivateAggregation.enableDebugMode`](https://developer.mozilla.org/en-US/docs/Web/API/PrivateAggregation/enableDebugMode)
    jsbind::Undefined enableDebugMode();
    /// The enableDebugMode method.
    /// [`PrivateAggregation.enableDebugMode`](https://developer.mozilla.org/en-US/docs/Web/API/PrivateAggregation/enableDebugMode)
    jsbind::Undefined enableDebugMode(const PADebugModeOptions& options);
};

} // namespace webbind