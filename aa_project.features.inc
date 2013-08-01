<?php
/**
 * @file
 * aa_project.features.inc
 */

/**
 * Implements hook_node_info().
 */
function aa_project_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('Use it to create a project to the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
