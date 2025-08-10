#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "NDEFRecordInit.hpp"

namespace webbind {

class NDEFRecord;

/// Interface NDEFRecord
/// [`NDEFRecord`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord)
class NDEFRecord : public emlite::Val {
    explicit NDEFRecord(Handle h) noexcept;
public:
    explicit NDEFRecord(const emlite::Val &val) noexcept;
    static NDEFRecord take_ownership(Handle h) noexcept;
    [[nodiscard]] NDEFRecord clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new NDEFRecord(..)` constructor, creating a new NDEFRecord instance
    NDEFRecord(const NDEFRecordInit& recordInit);
    /// [`NDEFRecord.recordType`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/recordType)
    /// [`NDEFRecord.recordType`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/recordType)
    [[nodiscard]] jsbind::String recordType() const;
    /// [`NDEFRecord.mediaType`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/mediaType)
    /// [`NDEFRecord.mediaType`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/mediaType)
    [[nodiscard]] jsbind::String mediaType() const;
    /// [`NDEFRecord.id`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/id)
    /// [`NDEFRecord.id`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/id)
    [[nodiscard]] jsbind::String id() const;
    /// [`NDEFRecord.data`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/data)
    /// [`NDEFRecord.data`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/data)
    [[nodiscard]] jsbind::DataView data() const;
    /// [`NDEFRecord.encoding`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/encoding)
    /// [`NDEFRecord.encoding`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/encoding)
    [[nodiscard]] jsbind::String encoding() const;
    /// [`NDEFRecord.lang`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/lang)
    /// [`NDEFRecord.lang`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/lang)
    [[nodiscard]] jsbind::String lang() const;
    /// The toRecords method.
    /// [`NDEFRecord.toRecords`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/toRecords)
    jsbind::TypedArray<NDEFRecord> toRecords();
};

} // namespace webbind