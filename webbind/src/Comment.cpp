#include <webbind/Comment.hpp>


Comment Comment::take_ownership(Handle h) noexcept {
        return Comment(h);
    }
Comment Comment::clone() const noexcept { return *this; }
Comment::Comment(Handle h) noexcept : CharacterData(emlite::Val::take_ownership(h)) {}
Comment::Comment(const emlite::Val &val) noexcept: CharacterData(val) {}


Comment::Comment() : CharacterData(emlite::Val::global("Comment").new_()) {}

Comment::Comment(const jsbind::DOMString& data) : CharacterData(emlite::Val::global("Comment").new_(data)) {}

