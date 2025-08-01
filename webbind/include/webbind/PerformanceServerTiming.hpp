#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The PerformanceServerTiming class.
/// [`PerformanceServerTiming`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceServerTiming)
class PerformanceServerTiming : public emlite::Val {
    explicit PerformanceServerTiming(Handle h) noexcept;

public:
    explicit PerformanceServerTiming(const emlite::Val &val) noexcept;
    static PerformanceServerTiming take_ownership(Handle h) noexcept;

    [[nodiscard]] PerformanceServerTiming clone() const noexcept;
    /// Getter of the `name` attribute.
    /// [`PerformanceServerTiming.name`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceServerTiming/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `duration` attribute.
    /// [`PerformanceServerTiming.duration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceServerTiming/duration)
    [[nodiscard]] jsbind::Any duration() const;
    /// Getter of the `description` attribute.
    /// [`PerformanceServerTiming.description`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceServerTiming/description)
    [[nodiscard]] jsbind::String description() const;
    /// The toJSON method.
    /// [`PerformanceServerTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceServerTiming/toJSON)
    jsbind::Object toJSON();
};

