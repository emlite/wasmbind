#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class IDBKeyRange;


/// The IDBKeyRange class.
/// [`IDBKeyRange`](https://developer.mozilla.org/en-US/docs/Web/API/IDBKeyRange)
class IDBKeyRange : public emlite::Val {
    explicit IDBKeyRange(Handle h) noexcept;

public:
    explicit IDBKeyRange(const emlite::Val &val) noexcept;
    static IDBKeyRange take_ownership(Handle h) noexcept;

    [[nodiscard]] IDBKeyRange clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `lower` attribute.
    /// [`IDBKeyRange.lower`](https://developer.mozilla.org/en-US/docs/Web/API/IDBKeyRange/lower)
    [[nodiscard]] jsbind::Any lower() const;
    /// Getter of the `upper` attribute.
    /// [`IDBKeyRange.upper`](https://developer.mozilla.org/en-US/docs/Web/API/IDBKeyRange/upper)
    [[nodiscard]] jsbind::Any upper() const;
    /// Getter of the `lowerOpen` attribute.
    /// [`IDBKeyRange.lowerOpen`](https://developer.mozilla.org/en-US/docs/Web/API/IDBKeyRange/lowerOpen)
    [[nodiscard]] bool lowerOpen() const;
    /// Getter of the `upperOpen` attribute.
    /// [`IDBKeyRange.upperOpen`](https://developer.mozilla.org/en-US/docs/Web/API/IDBKeyRange/upperOpen)
    [[nodiscard]] bool upperOpen() const;
    /// The only method.
    /// [`IDBKeyRange.only`](https://developer.mozilla.org/en-US/docs/Web/API/IDBKeyRange/only)
    static IDBKeyRange only(const jsbind::Any& value);
    /// The lowerBound method.
    /// [`IDBKeyRange.lowerBound`](https://developer.mozilla.org/en-US/docs/Web/API/IDBKeyRange/lowerBound)
    static IDBKeyRange lowerBound(const jsbind::Any& lower);
    /// The lowerBound method.
    /// [`IDBKeyRange.lowerBound`](https://developer.mozilla.org/en-US/docs/Web/API/IDBKeyRange/lowerBound)
    static IDBKeyRange lowerBound(const jsbind::Any& lower, bool open);
    /// The upperBound method.
    /// [`IDBKeyRange.upperBound`](https://developer.mozilla.org/en-US/docs/Web/API/IDBKeyRange/upperBound)
    static IDBKeyRange upperBound(const jsbind::Any& upper);
    /// The upperBound method.
    /// [`IDBKeyRange.upperBound`](https://developer.mozilla.org/en-US/docs/Web/API/IDBKeyRange/upperBound)
    static IDBKeyRange upperBound(const jsbind::Any& upper, bool open);
    /// The bound method.
    /// [`IDBKeyRange.bound`](https://developer.mozilla.org/en-US/docs/Web/API/IDBKeyRange/bound)
    static IDBKeyRange bound(const jsbind::Any& lower, const jsbind::Any& upper);
    /// The bound method.
    /// [`IDBKeyRange.bound`](https://developer.mozilla.org/en-US/docs/Web/API/IDBKeyRange/bound)
    static IDBKeyRange bound(const jsbind::Any& lower, const jsbind::Any& upper, bool lowerOpen);
    /// The bound method.
    /// [`IDBKeyRange.bound`](https://developer.mozilla.org/en-US/docs/Web/API/IDBKeyRange/bound)
    static IDBKeyRange bound(const jsbind::Any& lower, const jsbind::Any& upper, bool lowerOpen, bool upperOpen);
    /// The includes method.
    /// [`IDBKeyRange.includes`](https://developer.mozilla.org/en-US/docs/Web/API/IDBKeyRange/includes)
    bool includes(const jsbind::Any& key);
};

