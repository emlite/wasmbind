#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class Storage;

/// Dictionary type StorageEventInit
/// [`StorageEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEventInit)
class StorageEventInit : public EventInit {
  explicit StorageEventInit(Handle h) noexcept;
public:
    static StorageEventInit take_ownership(Handle h) noexcept;
    explicit StorageEventInit(const emlite::Val &val) noexcept;
    StorageEventInit() noexcept;
    [[nodiscard]] StorageEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String key() const;
    void key(const jsbind::String& value);
    [[nodiscard]] jsbind::String oldValue() const;
    void oldValue(const jsbind::String& value);
    [[nodiscard]] jsbind::String newValue() const;
    void newValue(const jsbind::String& value);
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
    [[nodiscard]] Storage storageArea() const;
    void storageArea(const Storage& value);
};

} // namespace webbind