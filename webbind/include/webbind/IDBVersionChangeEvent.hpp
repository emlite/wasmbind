#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The IDBVersionChangeEvent class.
/// [`IDBVersionChangeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/IDBVersionChangeEvent)
class IDBVersionChangeEvent : public Event {
    explicit IDBVersionChangeEvent(Handle h) noexcept;

public:
    explicit IDBVersionChangeEvent(const emlite::Val &val) noexcept;
    static IDBVersionChangeEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] IDBVersionChangeEvent clone() const noexcept;
    /// The `new IDBVersionChangeEvent(..)` constructor, creating a new IDBVersionChangeEvent instance
    IDBVersionChangeEvent(const jsbind::String& type);
    /// The `new IDBVersionChangeEvent(..)` constructor, creating a new IDBVersionChangeEvent instance
    IDBVersionChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `oldVersion` attribute.
    /// [`IDBVersionChangeEvent.oldVersion`](https://developer.mozilla.org/en-US/docs/Web/API/IDBVersionChangeEvent/oldVersion)
    [[nodiscard]] long long oldVersion() const;
    /// Getter of the `newVersion` attribute.
    /// [`IDBVersionChangeEvent.newVersion`](https://developer.mozilla.org/en-US/docs/Web/API/IDBVersionChangeEvent/newVersion)
    [[nodiscard]] long long newVersion() const;
};

