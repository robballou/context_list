<?php

class ContextListConditionDisplay {
  public $condition = NULL;
  public $settings = NULL;
  function __construct($condition = NULL, $settings = array()) {
    $this->condition = $condition;
    $this->settings = $settings;
  }

  function display() {
    return $this->condition;
  }
}

class ContextListConditionDisplayValues extends ContextListConditionDisplay {
  function display() {
    $values = array_map('htmlentities', $this->settings['values']);
    return $this->condition . ': ' . implode(', ', $values);
  }
}

class ContextListConditionDisplay_defaultcontent extends ContextListConditionDisplayValues {
}

class ContextListConditionDisplay_path extends ContextListConditionDisplayValues {
}