#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class NDEFRecord;


/// The NDEFRecord class.
/// [`NDEFRecord`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord)
class NDEFRecord : public emlite::Val {
    explicit NDEFRecord(Handle h) noexcept;

public:
    explicit NDEFRecord(const emlite::Val &val) noexcept;
    static NDEFRecord take_ownership(Handle h) noexcept;

    [[nodiscard]] NDEFRecord clone() const noexcept;
    /// The `new NDEFRecord(..)` constructor, creating a new NDEFRecord instance
    NDEFRecord(const jsbind::Any& recordInit);
    /// Getter of the `recordType` attribute.
    /// [`NDEFRecord.recordType`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/recordType)
    [[nodiscard]] jsbind::String recordType() const;
    /// Getter of the `mediaType` attribute.
    /// [`NDEFRecord.mediaType`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/mediaType)
    [[nodiscard]] jsbind::String mediaType() const;
    /// Getter of the `id` attribute.
    /// [`NDEFRecord.id`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/id)
    [[nodiscard]] jsbind::String id() const;
    /// Getter of the `data` attribute.
    /// [`NDEFRecord.data`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/data)
    [[nodiscard]] jsbind::DataView data() const;
    /// Getter of the `encoding` attribute.
    /// [`NDEFRecord.encoding`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/encoding)
    [[nodiscard]] jsbind::String encoding() const;
    /// Getter of the `lang` attribute.
    /// [`NDEFRecord.lang`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/lang)
    [[nodiscard]] jsbind::String lang() const;
    /// The toRecords method.
    /// [`NDEFRecord.toRecords`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord/toRecords)
    jsbind::TypedArray<NDEFRecord> toRecords();
};

