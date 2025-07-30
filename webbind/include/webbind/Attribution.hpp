#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class AttributionAggregationServices;
class AttributionImpressionResult;
class AttributionImpressionOptions;
class AttributionConversionResult;
class AttributionConversionOptions;


class AttributionImpressionResult : public emlite::Val {
  explicit AttributionImpressionResult(Handle h) noexcept;
public:
    static AttributionImpressionResult take_ownership(Handle h) noexcept;
    explicit AttributionImpressionResult(const emlite::Val &val) noexcept;
    AttributionImpressionResult() noexcept;
    AttributionImpressionResult clone() const noexcept;
};

class AttributionImpressionOptions : public emlite::Val {
  explicit AttributionImpressionOptions(Handle h) noexcept;
public:
    static AttributionImpressionOptions take_ownership(Handle h) noexcept;
    explicit AttributionImpressionOptions(const emlite::Val &val) noexcept;
    AttributionImpressionOptions() noexcept;
    AttributionImpressionOptions clone() const noexcept;
    unsigned long histogramIndex() const;
    void histogramIndex(unsigned long value);
    unsigned long matchValue() const;
    void matchValue(unsigned long value);
    jsbind::TypedArray<jsbind::String> conversionSites() const;
    void conversionSites(const jsbind::TypedArray<jsbind::String>& value);
    jsbind::TypedArray<jsbind::String> conversionCallers() const;
    void conversionCallers(const jsbind::TypedArray<jsbind::String>& value);
    unsigned long lifetimeDays() const;
    void lifetimeDays(unsigned long value);
};

class AttributionConversionResult : public emlite::Val {
  explicit AttributionConversionResult(Handle h) noexcept;
public:
    static AttributionConversionResult take_ownership(Handle h) noexcept;
    explicit AttributionConversionResult(const emlite::Val &val) noexcept;
    AttributionConversionResult() noexcept;
    AttributionConversionResult clone() const noexcept;
    jsbind::Uint8Array report() const;
    void report(const jsbind::Uint8Array& value);
};

class AttributionConversionOptions : public emlite::Val {
  explicit AttributionConversionOptions(Handle h) noexcept;
public:
    static AttributionConversionOptions take_ownership(Handle h) noexcept;
    explicit AttributionConversionOptions(const emlite::Val &val) noexcept;
    AttributionConversionOptions() noexcept;
    AttributionConversionOptions clone() const noexcept;
    jsbind::String aggregationService() const;
    void aggregationService(const jsbind::String& value);
    double epsilon() const;
    void epsilon(double value);
    unsigned long histogramSize() const;
    void histogramSize(unsigned long value);
    unsigned long lookbackDays() const;
    void lookbackDays(unsigned long value);
    jsbind::TypedArray<unsigned long> matchValues() const;
    void matchValues(jsbind::TypedArray<unsigned long> value);
    jsbind::TypedArray<jsbind::String> impressionSites() const;
    void impressionSites(const jsbind::TypedArray<jsbind::String>& value);
    jsbind::TypedArray<jsbind::String> impressionCallers() const;
    void impressionCallers(const jsbind::TypedArray<jsbind::String>& value);
    AttributionLogic logic() const;
    void logic(const AttributionLogic& value);
    unsigned long value() const;
    void value(unsigned long value);
    unsigned long maxValue() const;
    void maxValue(unsigned long value);
};

class Attribution : public emlite::Val {
    explicit Attribution(Handle h) noexcept;

public:
    explicit Attribution(const emlite::Val &val) noexcept;
    static Attribution take_ownership(Handle h) noexcept;

    Attribution clone() const noexcept;
    AttributionAggregationServices aggregationServices() const;
    jsbind::Promise<AttributionImpressionResult> saveImpression(const AttributionImpressionOptions& options);
    jsbind::Promise<AttributionConversionResult> measureConversion(const AttributionConversionOptions& options);
};

