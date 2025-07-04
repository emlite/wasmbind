#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class RealTimeContribution;


class RealTimeContribution : public emlite::Val {
  explicit RealTimeContribution(Handle h) noexcept;
public:
    static RealTimeContribution take_ownership(Handle h) noexcept;
    explicit RealTimeContribution(const emlite::Val &val) noexcept;
    RealTimeContribution() noexcept;
    RealTimeContribution clone() const noexcept;
    long bucket() const;
    void bucket(long value);
    double priorityWeight() const;
    void priorityWeight(double value);
    long latencyThreshold() const;
    void latencyThreshold(long value);
};

class RealTimeReporting : public emlite::Val {
    explicit RealTimeReporting(Handle h) noexcept;

public:
    explicit RealTimeReporting(const emlite::Val &val) noexcept;
    static RealTimeReporting take_ownership(Handle h) noexcept;

    RealTimeReporting clone() const noexcept;
    jsbind::Undefined contributeToHistogram(const RealTimeContribution& contribution);
};

