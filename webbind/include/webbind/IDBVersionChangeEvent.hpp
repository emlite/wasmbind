#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "IDBVersionChangeEventInit.hpp"

namespace webbind {

/// Interface IDBVersionChangeEvent
/// [`IDBVersionChangeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/IDBVersionChangeEvent)
class IDBVersionChangeEvent : public Event {
    explicit IDBVersionChangeEvent(Handle h) noexcept;
public:
    explicit IDBVersionChangeEvent(const emlite::Val &val) noexcept;
    static IDBVersionChangeEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] IDBVersionChangeEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new IDBVersionChangeEvent(..)` constructor, creating a new IDBVersionChangeEvent instance
    IDBVersionChangeEvent(const jsbind::String& type);
    /// The `new IDBVersionChangeEvent(..)` constructor, creating a new IDBVersionChangeEvent instance
    IDBVersionChangeEvent(const jsbind::String& type, const IDBVersionChangeEventInit& eventInitDict);
    /// [`IDBVersionChangeEvent.oldVersion`](https://developer.mozilla.org/en-US/docs/Web/API/IDBVersionChangeEvent/oldVersion)
    /// [`IDBVersionChangeEvent.oldVersion`](https://developer.mozilla.org/en-US/docs/Web/API/IDBVersionChangeEvent/oldVersion)
    [[nodiscard]] long long oldVersion() const;
    /// [`IDBVersionChangeEvent.newVersion`](https://developer.mozilla.org/en-US/docs/Web/API/IDBVersionChangeEvent/newVersion)
    /// [`IDBVersionChangeEvent.newVersion`](https://developer.mozilla.org/en-US/docs/Web/API/IDBVersionChangeEvent/newVersion)
    [[nodiscard]] long long newVersion() const;
};

} // namespace webbind