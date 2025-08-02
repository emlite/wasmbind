#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The MLGraph class.
/// [`MLGraph`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraph)
class MLGraph : public emlite::Val {
    explicit MLGraph(Handle h) noexcept;

public:
    explicit MLGraph(const emlite::Val &val) noexcept;
    static MLGraph take_ownership(Handle h) noexcept;

    [[nodiscard]] MLGraph clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The destroy method.
    /// [`MLGraph.destroy`](https://developer.mozilla.org/en-US/docs/Web/API/MLGraph/destroy)
    jsbind::Undefined destroy();
};

