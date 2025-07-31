#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The Storage class.
/// [`Storage`](https://developer.mozilla.org/en-US/docs/Web/API/Storage)
class Storage : public emlite::Val {
    explicit Storage(Handle h) noexcept;

public:
    explicit Storage(const emlite::Val &val) noexcept;
    static Storage take_ownership(Handle h) noexcept;

    [[nodiscard]] Storage clone() const noexcept;
    /// Getter of the `length` attribute.
    /// [`Storage.length`](https://developer.mozilla.org/en-US/docs/Web/API/Storage/length)
    [[nodiscard]] unsigned long length() const;
    /// The key method.
    /// [`Storage.key`](https://developer.mozilla.org/en-US/docs/Web/API/Storage/key)
    jsbind::String key(unsigned long index);
    /// The getItem method.
    /// [`Storage.getItem`](https://developer.mozilla.org/en-US/docs/Web/API/Storage/getItem)
    jsbind::String getItem(const jsbind::String& key);
    /// The setItem method.
    /// [`Storage.setItem`](https://developer.mozilla.org/en-US/docs/Web/API/Storage/setItem)
    jsbind::Undefined setItem(const jsbind::String& key, const jsbind::String& value);
    /// The removeItem method.
    /// [`Storage.removeItem`](https://developer.mozilla.org/en-US/docs/Web/API/Storage/removeItem)
    jsbind::Undefined removeItem(const jsbind::String& key);
    /// The clear method.
    /// [`Storage.clear`](https://developer.mozilla.org/en-US/docs/Web/API/Storage/clear)
    jsbind::Undefined clear();
};

