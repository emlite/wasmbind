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
    PAHistogramContribution clone() const noexcept;
    long long bucket() const;
    void bucket(long long value);
    long value() const;
    void value(long value);
    long long filteringId() const;
    void filteringId(long long value);
};

class PADebugModeOptions : public emlite::Val {
  explicit PADebugModeOptions(Handle h) noexcept;
public:
    static PADebugModeOptions take_ownership(Handle h) noexcept;
    explicit PADebugModeOptions(const emlite::Val &val) noexcept;
    PADebugModeOptions() noexcept;
    PADebugModeOptions clone() const noexcept;
    long long debugKey() const;
    void debugKey(long long value);
};

class PrivateAggregation : public emlite::Val {
    explicit PrivateAggregation(Handle h) noexcept;

public:
    explicit PrivateAggregation(const emlite::Val &val) noexcept;
    static PrivateAggregation take_ownership(Handle h) noexcept;

    PrivateAggregation clone() const noexcept;
    jsbind::Undefined contributeToHistogram(const PAHistogramContribution& contribution);
    jsbind::Undefined contributeToHistogramOnEvent(const jsbind::String& event, const jsbind::Record<jsbind::String, jsbind::Any>& contribution);
    jsbind::Undefined enableDebugMode();
    jsbind::Undefined enableDebugMode(const PADebugModeOptions& options);
};

