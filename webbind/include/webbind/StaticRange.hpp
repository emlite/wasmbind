#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AbstractRange.hpp"

namespace webbind {

class StaticRangeInit;

/// Interface StaticRange
/// [`StaticRange`](https://developer.mozilla.org/en-US/docs/Web/API/StaticRange)
class StaticRange : public AbstractRange {
    explicit StaticRange(Handle h) noexcept;
public:
    explicit StaticRange(const emlite::Val &val) noexcept;
    static StaticRange take_ownership(Handle h) noexcept;
    [[nodiscard]] StaticRange clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new StaticRange(..)` constructor, creating a new StaticRange instance
    StaticRange(const StaticRangeInit& init);
};

} // namespace webbind