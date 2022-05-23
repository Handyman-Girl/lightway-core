#include "utils.h"

#define DEFCASE(X) \
  case X:          \
    return #X

const char *he_return_code_name(he_return_code_t rc) {
  switch(rc) {
    DEFCASE(HE_SUCCESS);
    DEFCASE(HE_ERR_STRING_TOO_LONG);
    DEFCASE(HE_ERR_EMPTY_STRING);
    DEFCASE(HE_ERR_INVALID_CONN_STATE);
    DEFCASE(HE_ERR_NULL_POINTER);
    DEFCASE(HE_ERR_EMPTY_PACKET);
    DEFCASE(HE_ERR_PACKET_TOO_SMALL);
    DEFCASE(HE_ERR_ZERO_SIZE);
    DEFCASE(HE_ERR_NEGATIVE_NUMBER);
    DEFCASE(HE_ERR_INIT_FAILED);
    DEFCASE(HE_ERR_NO_MEMORY);
    DEFCASE(HE_ERR_NOT_HE_PACKET);
    DEFCASE(HE_ERR_SSL_BAD_FILETYPE);
    DEFCASE(HE_ERR_SSL_BAD_FILE);
    DEFCASE(HE_ERR_SSL_OUT_OF_MEMORY);
    DEFCASE(HE_ERR_SSL_ASN_INPUT);
    DEFCASE(HE_ERR_SSL_BUFFER);
    DEFCASE(HE_ERR_SSL_CERT);
    DEFCASE(HE_ERR_SSL_ERROR);
    DEFCASE(HE_ERR_CONF_USERNAME_NOT_SET);
    DEFCASE(HE_ERR_CONF_PASSWORD_NOT_SET);
    DEFCASE(HE_ERR_CONF_CA_NOT_SET);
    DEFCASE(HE_ERR_CONF_MTU_NOT_SET);
    DEFCASE(HE_WANT_READ);
    DEFCASE(HE_WANT_WRITE);
    DEFCASE(HE_ERR_CONF_OUTSIDE_WRITE_CB_NOT_SET);
    DEFCASE(HE_ERR_CONNECT_FAILED);
    DEFCASE(HE_CONNECTION_TIMED_OUT);
    DEFCASE(HE_ERR_NOT_CONNECTED);
    DEFCASE(HE_ERR_UNSUPPORTED_PACKET_TYPE);
    DEFCASE(HE_ERR_CONNECTION_WAS_CLOSED);
    DEFCASE(HE_ERR_BAD_PACKET);
    DEFCASE(HE_ERR_CALLBACK_FAILED);
    DEFCASE(HE_ERR_FAILED);
    DEFCASE(HE_ERR_SERVER_DN_MISMATCH);
    DEFCASE(HE_ERR_CANNOT_VERIFY_SERVER_CERT);
    DEFCASE(HE_ERR_NEVER_CONNECTED);
    DEFCASE(HE_ERR_INVALID_MTU_SIZE);
    DEFCASE(HE_ERR_CLEANUP_FAILED);
    DEFCASE(HE_ERR_REJECTED_SESSION);
    DEFCASE(HE_ERR_ACCESS_DENIED);
    DEFCASE(HE_ERR_PACKET_TOO_LARGE);
    DEFCASE(HE_ERR_INACTIVITY_TIMEOUT);
    DEFCASE(HE_ERR_POINTER_WOULD_OVERFLOW);
    DEFCASE(HE_ERR_INVALID_CONNECTION_TYPE);
    DEFCASE(HE_ERR_RNG_FAILURE);
    DEFCASE(HE_ERR_CONF_AUTH_CB_NOT_SET);
    DEFCASE(HE_ERR_PLUGIN_DROP);
    DEFCASE(HE_ERR_UNKNOWN_SESSION);
    DEFCASE(HE_ERR_SSL_ERROR_NONFATAL);
    DEFCASE(HE_ERR_INCORRECT_PROTOCOL_VERSION);
    DEFCASE(HE_ERR_CONF_CONFLICTING_AUTH_METHODS);
    DEFCASE(HE_ERR_ACCESS_DENIED_NO_AUTH_USERPASS_HANDLER);
    DEFCASE(HE_ERR_ACCESS_DENIED_NO_AUTH_BUF_HANDLER);
    DEFCASE(HE_ERR_SERVER_GOODBYE);
    DEFCASE(HE_ERR_INVALID_AUTH_TYPE);
  }
  return "HE_ERR_UNKNOWN";
}

const char *he_client_state_name(he_conn_state_t st) {
  switch(st) {
    DEFCASE(HE_STATE_NONE);
    DEFCASE(HE_STATE_DISCONNECTED);
    DEFCASE(HE_STATE_CONNECTING);
    DEFCASE(HE_STATE_DISCONNECTING);
    DEFCASE(HE_STATE_AUTHENTICATING);
    DEFCASE(HE_STATE_LINK_UP);
    DEFCASE(HE_STATE_ONLINE);
    DEFCASE(HE_STATE_CONFIGURING);
  }
  return "HE_STATE_UNKNOWN";
}

const char *he_client_event_name(he_conn_event_t ev) {
  switch(ev) {
    DEFCASE(HE_EVENT_FIRST_MESSAGE_RECEIVED);
    DEFCASE(HE_EVENT_PONG);
    DEFCASE(HE_EVENT_REJECTED_FRAGMENTED_PACKETS_SENT_BY_HOST);
    DEFCASE(HE_EVENT_SECURE_RENEGOTIATION_STARTED);
    DEFCASE(HE_EVENT_SECURE_RENEGOTIATION_COMPLETED);
    DEFCASE(HE_EVENT_PENDING_SESSION_ACKNOWLEDGED);
  }
  return "HE_EVENT_UNKNOWN";
}

#undef DEFCASE