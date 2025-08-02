#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class PAHistogramContribution;
class PADebugModeOptions;


class PAHistogramContribution : public emlite::Val {
  explicit PAHistogramContribution(Handle h) noexcept;
public:
    static PAHistogramContribution take_ownership(Handle h) noexcept;
    explicit PAHistogramContribution(const emlite::Val &val) noexcept;
    PAHistogramContribution() noexcept;
    [[nodiscard]] PAHistogramContribution clone() const noexcept;
    [[nodiscard]] long long bucket() const;
    void bucket(long long value);
    [[nodiscard]] long value() const;
    void value(long value);
    [[nodiscard]] long long filteringId() const;
    void filteringId(long long value);
};

class PADebugModeOptions : public emlite::Val {
  explicit PADebugModeOptions(Handle h) noexcept;
public:
    static PADebugModeOptions take_ownership(Handle h) noexcept;
    explicit PADebugModeOptions(const emlite::Val &val) noexcept;
    PADebugModeOptions() noexcept;
    [[nodiscard]] PADebugModeOptions clone() const noexcept;
    [[nodiscard]] long long debugKey() const;
    void debugKey(long long value);
};

/// The PrivateAggregation class.
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

