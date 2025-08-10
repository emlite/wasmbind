#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XRSpace;

/// Interface XRAnchor
/// [`XRAnchor`](https://developer.mozilla.org/en-US/docs/Web/API/XRAnchor)
class XRAnchor : public emlite::Val {
    explicit XRAnchor(Handle h) noexcept;
public:
    explicit XRAnchor(const emlite::Val &val) noexcept;
    static XRAnchor take_ownership(Handle h) noexcept;
    [[nodiscard]] XRAnchor clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`XRAnchor.anchorSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRAnchor/anchorSpace)
    /// [`XRAnchor.anchorSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRAnchor/anchorSpace)
    [[nodiscard]] XRSpace anchorSpace() const;
    /// The requestPersistentHandle method.
    /// [`XRAnchor.requestPersistentHandle`](https://developer.mozilla.org/en-US/docs/Web/API/XRAnchor/requestPersistentHandle)
    jsbind::Promise<jsbind::String> requestPersistentHandle();
    /// The delete method.
    /// [`XRAnchor.delete`](https://developer.mozilla.org/en-US/docs/Web/API/XRAnchor/delete)
    jsbind::Undefined delete_();
};

} // namespace webbind