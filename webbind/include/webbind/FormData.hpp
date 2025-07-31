#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Blob;
class HTMLElement;
class HTMLFormElement;


/// The FormData class.
/// [`FormData`](https://developer.mozilla.org/en-US/docs/Web/API/FormData)
class FormData : public emlite::Val {
    explicit FormData(Handle h) noexcept;

public:
    explicit FormData(const emlite::Val &val) noexcept;
    static FormData take_ownership(Handle h) noexcept;

    [[nodiscard]] FormData clone() const noexcept;
    /// The `new FormData(..)` constructor, creating a new FormData instance
    FormData();
    /// The `new FormData(..)` constructor, creating a new FormData instance
    FormData(const HTMLFormElement& form);
    /// The `new FormData(..)` constructor, creating a new FormData instance
    FormData(const HTMLFormElement& form, const HTMLElement& submitter);
    /// The append method.
    /// [`FormData.append`](https://developer.mozilla.org/en-US/docs/Web/API/FormData/append)
    jsbind::Undefined append(const jsbind::String& name, const Blob& blobValue);
    /// The append method.
    /// [`FormData.append`](https://developer.mozilla.org/en-US/docs/Web/API/FormData/append)
    jsbind::Undefined append(const jsbind::String& name, const Blob& blobValue, const jsbind::String& filename);
    /// The delete method.
    /// [`FormData.delete`](https://developer.mozilla.org/en-US/docs/Web/API/FormData/delete)
    jsbind::Undefined delete_(const jsbind::String& name);
    /// The get method.
    /// [`FormData.get`](https://developer.mozilla.org/en-US/docs/Web/API/FormData/get)
    jsbind::Any get(const jsbind::String& name);
    /// The getAll method.
    /// [`FormData.getAll`](https://developer.mozilla.org/en-US/docs/Web/API/FormData/getAll)
    jsbind::TypedArray<jsbind::Any> getAll(const jsbind::String& name);
    /// The has method.
    /// [`FormData.has`](https://developer.mozilla.org/en-US/docs/Web/API/FormData/has)
    bool has(const jsbind::String& name);
    /// The set method.
    /// [`FormData.set`](https://developer.mozilla.org/en-US/docs/Web/API/FormData/set)
    jsbind::Undefined set(const jsbind::String& name, const Blob& blobValue);
    /// The set method.
    /// [`FormData.set`](https://developer.mozilla.org/en-US/docs/Web/API/FormData/set)
    jsbind::Undefined set(const jsbind::String& name, const Blob& blobValue, const jsbind::String& filename);
};

