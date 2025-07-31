#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


/// The NavigationHistoryEntry class.
/// [`NavigationHistoryEntry`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry)
class NavigationHistoryEntry : public EventTarget {
    explicit NavigationHistoryEntry(Handle h) noexcept;

public:
    explicit NavigationHistoryEntry(const emlite::Val &val) noexcept;
    static NavigationHistoryEntry take_ownership(Handle h) noexcept;

    [[nodiscard]] NavigationHistoryEntry clone() const noexcept;
    /// Getter of the `url` attribute.
    /// [`NavigationHistoryEntry.url`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/url)
    [[nodiscard]] jsbind::String url() const;
    /// Getter of the `key` attribute.
    /// [`NavigationHistoryEntry.key`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/key)
    [[nodiscard]] jsbind::String key() const;
    /// Getter of the `id` attribute.
    /// [`NavigationHistoryEntry.id`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/id)
    [[nodiscard]] jsbind::String id() const;
    /// Getter of the `index` attribute.
    /// [`NavigationHistoryEntry.index`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/index)
    [[nodiscard]] long long index() const;
    /// Getter of the `sameDocument` attribute.
    /// [`NavigationHistoryEntry.sameDocument`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/sameDocument)
    [[nodiscard]] bool sameDocument() const;
    /// The getState method.
    /// [`NavigationHistoryEntry.getState`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/getState)
    jsbind::Any getState();
    /// Getter of the `ondispose` attribute.
    /// [`NavigationHistoryEntry.ondispose`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/ondispose)
    [[nodiscard]] jsbind::Any ondispose() const;
    /// Setter of the `ondispose` attribute.
    /// [`NavigationHistoryEntry.ondispose`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry/ondispose)
    void ondispose(const jsbind::Any& value);
};

