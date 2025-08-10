#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class Storage;

/// Dictionary type StorageEventInit
class StorageEventInit : public EventInit {
  explicit StorageEventInit(Handle h) noexcept;
public:
    static StorageEventInit take_ownership(Handle h) noexcept;
    explicit StorageEventInit(const emlite::Val &val) noexcept;
    StorageEventInit() noexcept;
    [[nodiscard]] StorageEventInit clone() const noexcept;
    /// Getter of the `key` attribute.
    [[nodiscard]] jsbind::String key() const;
    /// Setter of the `key` attribute.
    void key(const jsbind::String& value);
    /// Getter of the `oldValue` attribute.
    [[nodiscard]] jsbind::String oldValue() const;
    /// Setter of the `oldValue` attribute.
    void oldValue(const jsbind::String& value);
    /// Getter of the `newValue` attribute.
    [[nodiscard]] jsbind::String newValue() const;
    /// Setter of the `newValue` attribute.
    void newValue(const jsbind::String& value);
    /// Getter of the `url` attribute.
    [[nodiscard]] jsbind::String url() const;
    /// Setter of the `url` attribute.
    void url(const jsbind::String& value);
    /// Getter of the `storageArea` attribute.
    [[nodiscard]] Storage storageArea() const;
    /// Setter of the `storageArea` attribute.
    void storageArea(const Storage& value);
};

} // namespace webbind