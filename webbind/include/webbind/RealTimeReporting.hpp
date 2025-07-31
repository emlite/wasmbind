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
    [[nodiscard]] RealTimeContribution clone() const noexcept;
    [[nodiscard]] long bucket() const;
    void bucket(long value);
    [[nodiscard]] double priorityWeight() const;
    void priorityWeight(double value);
    [[nodiscard]] long latencyThreshold() const;
    void latencyThreshold(long value);
};

/// The RealTimeReporting class.
/// [`RealTimeReporting`](https://developer.mozilla.org/en-US/docs/Web/API/RealTimeReporting)
class RealTimeReporting : public emlite::Val {
    explicit RealTimeReporting(Handle h) noexcept;

public:
    explicit RealTimeReporting(const emlite::Val &val) noexcept;
    static RealTimeReporting take_ownership(Handle h) noexcept;

    [[nodiscard]] RealTimeReporting clone() const noexcept;
    /// The contributeToHistogram method.
    /// [`RealTimeReporting.contributeToHistogram`](https://developer.mozilla.org/en-US/docs/Web/API/RealTimeReporting/contributeToHistogram)
    jsbind::Undefined contributeToHistogram(const RealTimeContribution& contribution);
};

