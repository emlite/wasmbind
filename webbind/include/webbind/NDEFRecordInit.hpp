#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type NDEFRecordInit
class NDEFRecordInit : public emlite::Val {
  explicit NDEFRecordInit(Handle h) noexcept;
public:
    static NDEFRecordInit take_ownership(Handle h) noexcept;
    explicit NDEFRecordInit(const emlite::Val &val) noexcept;
    NDEFRecordInit() noexcept;
    [[nodiscard]] NDEFRecordInit clone() const noexcept;
    /// Getter of the `recordType` attribute.
    [[nodiscard]] jsbind::String recordType() const;
    /// Setter of the `recordType` attribute.
    void recordType(const jsbind::String& value);
    /// Getter of the `mediaType` attribute.
    [[nodiscard]] jsbind::String mediaType() const;
    /// Setter of the `mediaType` attribute.
    void mediaType(const jsbind::String& value);
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::String& value);
    /// Getter of the `encoding` attribute.
    [[nodiscard]] jsbind::String encoding() const;
    /// Setter of the `encoding` attribute.
    void encoding(const jsbind::String& value);
    /// Getter of the `lang` attribute.
    [[nodiscard]] jsbind::String lang() const;
    /// Setter of the `lang` attribute.
    void lang(const jsbind::String& value);
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::Any data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::Any& value);
};

} // namespace webbind