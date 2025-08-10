#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type NDEFRecordInit
/// [`NDEFRecordInit`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecordInit)
class NDEFRecordInit : public emlite::Val {
  explicit NDEFRecordInit(Handle h) noexcept;
public:
    static NDEFRecordInit take_ownership(Handle h) noexcept;
    explicit NDEFRecordInit(const emlite::Val &val) noexcept;
    NDEFRecordInit() noexcept;
    [[nodiscard]] NDEFRecordInit clone() const noexcept;
    [[nodiscard]] jsbind::String recordType() const;
    void recordType(const jsbind::String& value);
    [[nodiscard]] jsbind::String mediaType() const;
    void mediaType(const jsbind::String& value);
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
    [[nodiscard]] jsbind::String encoding() const;
    void encoding(const jsbind::String& value);
    [[nodiscard]] jsbind::String lang() const;
    void lang(const jsbind::String& value);
    [[nodiscard]] jsbind::Any data() const;
    void data(const jsbind::Any& value);
};

} // namespace webbind