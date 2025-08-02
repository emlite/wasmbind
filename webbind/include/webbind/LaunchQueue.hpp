#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The LaunchQueue class.
/// [`LaunchQueue`](https://developer.mozilla.org/en-US/docs/Web/API/LaunchQueue)
class LaunchQueue : public emlite::Val {
    explicit LaunchQueue(Handle h) noexcept;

public:
    explicit LaunchQueue(const emlite::Val &val) noexcept;
    static LaunchQueue take_ownership(Handle h) noexcept;

    [[nodiscard]] LaunchQueue clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The setConsumer method.
    /// [`LaunchQueue.setConsumer`](https://developer.mozilla.org/en-US/docs/Web/API/LaunchQueue/setConsumer)
    jsbind::Undefined setConsumer(const jsbind::Function& consumer);
};

