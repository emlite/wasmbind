#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MutationObserverInit.hpp"

namespace webbind {

class Node;
class MutationRecord;

/// Interface MutationObserver
/// [`MutationObserver`](https://developer.mozilla.org/en-US/docs/Web/API/MutationObserver)
class MutationObserver : public emlite::Val {
    explicit MutationObserver(Handle h) noexcept;
public:
    explicit MutationObserver(const emlite::Val &val) noexcept;
    static MutationObserver take_ownership(Handle h) noexcept;
    [[nodiscard]] MutationObserver clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new MutationObserver(..)` constructor, creating a new MutationObserver instance
    MutationObserver(const jsbind::Function& callback);
    /// The observe method.
    /// [`MutationObserver.observe`](https://developer.mozilla.org/en-US/docs/Web/API/MutationObserver/observe)
    jsbind::Undefined observe(const Node& target);
    /// The observe method.
    /// [`MutationObserver.observe`](https://developer.mozilla.org/en-US/docs/Web/API/MutationObserver/observe)
    jsbind::Undefined observe(const Node& target, const MutationObserverInit& options);
    /// The disconnect method.
    /// [`MutationObserver.disconnect`](https://developer.mozilla.org/en-US/docs/Web/API/MutationObserver/disconnect)
    jsbind::Undefined disconnect();
    /// The takeRecords method.
    /// [`MutationObserver.takeRecords`](https://developer.mozilla.org/en-US/docs/Web/API/MutationObserver/takeRecords)
    jsbind::TypedArray<MutationRecord> takeRecords();
};

} // namespace webbind