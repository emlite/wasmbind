#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type IIRFilterOptions
/// [`IIRFilterOptions`](https://developer.mozilla.org/en-US/docs/Web/API/IIRFilterOptions)
class IIRFilterOptions : public AudioNodeOptions {
  explicit IIRFilterOptions(Handle h) noexcept;
public:
    static IIRFilterOptions take_ownership(Handle h) noexcept;
    explicit IIRFilterOptions(const emlite::Val &val) noexcept;
    IIRFilterOptions() noexcept;
    [[nodiscard]] IIRFilterOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<double> feedforward() const;
    void feedforward(jsbind::TypedArray<double> value);
    [[nodiscard]] jsbind::TypedArray<double> feedback() const;
    void feedback(jsbind::TypedArray<double> value);
};

} // namespace webbind