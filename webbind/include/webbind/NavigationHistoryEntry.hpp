#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

/// Interface NavigationHistoryEntry
/// [`NavigationHistoryEntry`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry)
class NavigationHistoryEntry : public EventTarget {
    explicit NavigationHistoryEntry(Handle h) noexcept;
public:
    explicit NavigationHistoryEntry(const emlite::Val &val) noexcept;
    static NavigationHistoryEntry take_ownership(Handle h) noexcept;
    [[nodiscard]] NavigationHistoryEntry clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`NavigationHistoryEntry.url`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/url)
    /// [`NavigationHistoryEntry.url`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/url)
    [[nodiscard]] jsbind::String url() const;
    /// [`NavigationHistoryEntry.key`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/key)
    /// [`NavigationHistoryEntry.key`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/key)
    [[nodiscard]] jsbind::String key() const;
    /// [`NavigationHistoryEntry.id`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/id)
    /// [`NavigationHistoryEntry.id`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/id)
    [[nodiscard]] jsbind::String id() const;
    /// [`NavigationHistoryEntry.index`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/index)
    /// [`NavigationHistoryEntry.index`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/index)
    [[nodiscard]] long long index() const;
    /// [`NavigationHistoryEntry.sameDocument`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/sameDocument)
    /// [`NavigationHistoryEntry.sameDocument`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/sameDocument)
    [[nodiscard]] bool sameDocument() const;
    /// The getState method.
    /// [`NavigationHistoryEntry.getState`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/getState)
    jsbind::Any getState();
    /// [`NavigationHistoryEntry.ondispose`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/ondispose)
    /// [`NavigationHistoryEntry.ondispose`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/ondispose)
    [[nodiscard]] jsbind::Any ondispose() const;
    /// Setter of the `ondispose` attribute.
    /// [`NavigationHistoryEntry.ondispose`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/ondispose)
    void ondispose(const jsbind::Any& value);
};

} // namespace webbind