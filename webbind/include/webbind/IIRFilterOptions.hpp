#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type IIRFilterOptions
class IIRFilterOptions : public AudioNodeOptions {
  explicit IIRFilterOptions(Handle h) noexcept;
public:
    static IIRFilterOptions take_ownership(Handle h) noexcept;
    explicit IIRFilterOptions(const emlite::Val &val) noexcept;
    IIRFilterOptions() noexcept;
    [[nodiscard]] IIRFilterOptions clone() const noexcept;
    /// Getter of the `feedforward` attribute.
    [[nodiscard]] jsbind::TypedArray<double> feedforward() const;
    /// Setter of the `feedforward` attribute.
    void feedforward(jsbind::TypedArray<double> value);
    /// Getter of the `feedback` attribute.
    [[nodiscard]] jsbind::TypedArray<double> feedback() const;
    /// Setter of the `feedback` attribute.
    void feedback(jsbind::TypedArray<double> value);
};

} // namespace webbind