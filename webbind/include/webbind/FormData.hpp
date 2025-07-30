#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Blob;
class HTMLElement;
class HTMLFormElement;


class FormData : public emlite::Val {
    explicit FormData(Handle h) noexcept;

public:
    explicit FormData(const emlite::Val &val) noexcept;
    static FormData take_ownership(Handle h) noexcept;

    FormData clone() const noexcept;
    FormData();
    FormData(const HTMLFormElement& form);
    FormData(const HTMLFormElement& form, const HTMLElement& submitter);
    jsbind::Undefined append(const jsbind::String& name, const Blob& blobValue);
    jsbind::Undefined append(const jsbind::String& name, const Blob& blobValue, const jsbind::String& filename);
    jsbind::Undefined delete_(const jsbind::String& name);
    jsbind::Any get(const jsbind::String& name);
    jsbind::TypedArray<jsbind::Any> getAll(const jsbind::String& name);
    bool has(const jsbind::String& name);
    jsbind::Undefined set(const jsbind::String& name, const Blob& blobValue);
    jsbind::Undefined set(const jsbind::String& name, const Blob& blobValue, const jsbind::String& filename);
};

