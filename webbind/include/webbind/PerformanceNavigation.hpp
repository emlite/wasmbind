#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The PerformanceNavigation class.
/// [`PerformanceNavigation`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigation)
class PerformanceNavigation : public emlite::Val {
    explicit PerformanceNavigation(Handle h) noexcept;

public:
    explicit PerformanceNavigation(const emlite::Val &val) noexcept;
    static PerformanceNavigation take_ownership(Handle h) noexcept;

    [[nodiscard]] PerformanceNavigation clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `type` attribute.
    /// [`PerformanceNavigation.type`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigation/type)
    [[nodiscard]] unsigned short type() const;
    /// Getter of the `redirectCount` attribute.
    /// [`PerformanceNavigation.redirectCount`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigation/redirectCount)
    [[nodiscard]] unsigned short redirectCount() const;
    /// The toJSON method.
    /// [`PerformanceNavigation.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigation/toJSON)
    jsbind::Object toJSON();
};

